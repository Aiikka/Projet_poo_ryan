#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappLIVRER

    {

    private:

        int id_client;

        int id_adresse;

    public:

        CL_mappLIVRER(void);

        String^ SELECT(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);

    };

}
