#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappARTICLE

    {

    private:

        int id_article;

        String^ nom_article;

        float prix;

        String^ design_article;

        int reap_article;

    public:

        CL_mappARTICLE(void);

        String^ SELECT(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);

        void setIdArticle(int);

        void setnom_article(String^);

        void setprix(float);

        void setdesign_article(String^);

        void setreap_article(int);

        int getIdArticle(void);

        String^ getnom_article(void);

        float getprix(void);

        String^ getdesign_article(void);

        int getreap_article(void);

    };

}

