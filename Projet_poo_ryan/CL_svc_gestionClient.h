#pragma once
#include "CL_CAD.h"
#include "CL_Client.h"
#include "CL_Adresse.h"
#include "CL_mappFACTURER.h"
#include"CL_mappLIVRER.h"


using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC

{

    ref class CL_svc_gestionClient

    {

    private:

        NS_Composants::CL_CAD^ CAD;
        NS_Composants::CL_Client^ client;
        NS_Composants::CL_Adresse^ adresse;
        NS_Composants::CL_mappFACTURER^ facturer;
        NS_Composants::CL_mappLIVRER^ livrer;
        DataSet^ ds;

    public:

        CL_svc_gestionClient(void);
        DataSet^ listeClients(String^);
        void ajouter(String^, String^, String^, array<String^>^, array<String^>^);
        void modifier(int, String^, String^, array<String^>^);
        void supprimer(int);

    };

}
