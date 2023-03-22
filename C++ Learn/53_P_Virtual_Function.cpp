#include <iostream>
using namespace std;

class Original{
    protected:
        float rating;
        string title;
    public:
        Original(float r , string t){
            rating = r;
            title = t;
        }

        virtual void display(){                     //------------> IF you will not use virtual here then this code will use this display function only
            cout<<"Primary Display"<<endl;
            }
};

class web_vid : public Original{
    protected:
        float vid_Len;
    public:
        web_vid(float r, string t, float l) : Original(r , t){
            vid_Len = l;
        }
        void display(){
            cout<<"The tile of video is : "<<title<<endl;
            cout<<"The rating of video out of 5 star is : "<<rating<<endl;
            cout<<"The length of video is : "<<vid_Len<<" mins"<<endl;
        }
};

class web_note : public Original{
    protected:
        float word_len;
    public:
        web_note(float r, string t, float w) : Original(r , t){
            word_len = w;
        }
        void display(){
            cout<<"The tile of video is : "<<title<<endl;
            cout<<"The rating of web note out of 5 star is : "<<rating<<endl;
            cout<<"The word length of web note is : "<<word_len<<" words"<<endl;
        }
};

int main()
{
    string title;
    float rate, word_len, vid_len;

    // For the web_vid
    cout<<"Enter the title : ";
    cin>>title;
    cout<<"Enter the rating : ";
    cin>>rate;
    cout<<"Enter the video length : ";
    cin>>vid_len;
    web_vid vid(rate,title,vid_len);

    // For the web_NOTE
    cout<<"Enter the title : ";
    cin>>title;
    cout<<"Enter the rating : ";
    cin>>rate;
    cout<<"Enter the word length : ";
    cin>>word_len;
    web_note note(rate,title,word_len);

    // Now Making the pointer
    Original* obj[2];

    obj[0] = &vid;
    obj[1] = &note;
    
    obj[0]->display();
    obj[1]->display();


    return 0;
}