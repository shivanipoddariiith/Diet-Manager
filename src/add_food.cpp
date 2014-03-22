#include "logger.h"


class add_food
{

fstream m_pInputFile;
ofstream   update;

public:
void execute(string m)
{

	      string line ; 
              ifstream check;ofstream add;ifstream add1;
         
             m_pInputFile.open("logfile.txt",std::ios_base::app | std::ios_base::out);
              remove_blank("logfile.txt");
              remove_blank("update.txt");
            
              
                 if (is_empty("logfile.txt")==1)
                      m_pInputFile<<m;
                else
                  m_pInputFile<<endl<<m;

	
    
		m_pInputFile.close();
		m_pInputFile.clear();
             
              
		add.open("update.txt", std::ios_base::app );
           
                if (is_empty("update.txt")==1)
                      m_pInputFile<<"Food added";
                else
                  m_pInputFile<<endl<<"Food added";
		   add.close();
                 


	}



	void undo()
	{     string line;
		string line_2;
		ofstream out;
		out.open("logfile.txt", std::ios_base::app | std::ios_base::out );
		m_pInputFile.open("update.txt" );
             /*     remove_blank("logfile.txt");
                       remove_blank("update.txt");*/

		while(!  m_pInputFile.eof())
		{
			getline(m_pInputFile,line);
                       //  cout <<line <<"line"<<endl;
		}
		 
	
		m_pInputFile.close();
		if (line=="log edited")
 
		{  
                         remove_blank("logfile.txt");
                       remove_blank("update.txt");
                       remove_blank("editedlogs.txt");
                    //    removelastline("logfile.txt");
			ifstream editlogs;
			editlogs.open("editedlogs.txt");
			while(!  editlogs.eof())
			{
				getline(editlogs, line_2);
                               
			}
                            
                      string firstCharacter;
		//	line_s=line;
                        stringstream ssin(line_2);
			ssin >>firstCharacter;
                              cout <<firstCharacter;
                          deletelog(firstCharacter);
                        	  cout<<line_2;
			
			out<<endl<<line_2;
                         out.close();
                          removelastline("update.txt");
                        removelastline("deletedlogs.txt");
                         system("sort -n -k 1 logfile.txt > sorted-out.txt");
                        remove("logfile.txt");
                        rename("sorted-out.txt" , "logfile.txt");
			removelastline("update.txt");
			removelastline("editedlogs.txt");
			editlogs.close();}
		else if (line=="log deleted")
		{  // cout << "yuppie";
                      /*  remove_blank("logfile.txt");
                       remove_blank("update.txt");*/
                        remove_blank("logfile.txt");
                       remove_blank("update.txt");
                        remove_blank("deletedlogs.txt");
			ifstream deletelogs;
			deletelogs.open("deletedlogs.txt");
			while(!  deletelogs.eof())
			{
				getline(   deletelogs,line_2);
			}
			out<<endl<<line_2;
                        out.close();
                    //     system("sort -n -k 1,1 logfile");
                    system("sort -n -k 1 logfile.txt > sorted-out.txt");
                        remove("logfile.txt");
                        rename("sorted-out.txt" , "logfile.txt");
			removelastline("update.txt");
			removelastline("deletedlogs.txt");
                     
			//sortfile("logfile.txt");
                          deletelogs.close(); }
		else if (line=="Food added")
		{    removelastline("logfile.txt");
			removelastline("update.txt");
                        remove_blank("logfile.txt");
                       remove_blank("update.txt");
                }


		out.close();
	}


};

int main()
{
return 0;
}
