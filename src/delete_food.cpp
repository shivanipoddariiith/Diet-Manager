#include "logger.h"


class delete_food
{

fstream m_pInputFile;
ofstream   update;

public:
void execute(string id)
{
string line;int i=0;
		m_pInputFile.open("logfile.txt");
		ofstream   outfile;    ofstream   deletedlogs;
		
                 
		deletedlogs.open("deletedlogs.txt",ios_base::app);
                 remove_blank("logfile.txt");
                 remove_blank("update.txt");
                 remove_blank("temp.txt");
		while(getline(m_pInputFile, line))
		{  //  cout <<line ;
                        outfile.open("temp.txt",ios_base::app | std::ios_base::out);
			string firstCharacter;
		//	line_s=line;
                        stringstream ssin(line);
			ssin >>firstCharacter;
                         cout << is_empty("temp.txt");
			if (firstCharacter!= id )
			{ 
			      if(is_empty("temp.txt")==1)
                                       {outfile<< line;}
                              else 
                                 
                                   {    cout <<"yayyyy ";
                                           outfile<<endl<<line;
                                     //outfile<<endl<<line_s;}
                                         // outfile<<line;
                                    }  
                        }
			else
			{     
                                 if (is_empty("deletedlogs.txt")==1){
				deletedlogs<<line;}
                                 else
                                 deletedlogs<<endl<<line;

			}
                       outfile.close();

		}

		m_pInputFile .close();

		
		deletedlogs.close();
         
		remove("logfile.txt");

		rename("temp.txt", "logfile.txt");
		
	update.open("update.txt", std::ios_base::app );
                if (is_empty("update.txt")==1){
			update<<"log deleted";
		}
                else{
			update<<"\nlog deleted";
		}
		update.close();
          
      

	}



	void undo()
	{    string line;
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
