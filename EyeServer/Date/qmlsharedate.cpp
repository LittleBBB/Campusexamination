#include "qmlsharedate.h"

QmlShareDate::QmlShareDate(QObject *parent) : QObject(parent)
{
    m_massageName="MassageEye";
    m_kinectName="KinectClient";
    m_faceName="FaceClient";
//    指令
    m_prepareMassage="mode_1_massage#!";
    m_appearMan="massage_people_yes#!";
    m_openLight="massage_light_open#!";
    m_closeLight="massage_light_close#!";
    m_openMassage="massage_motor_start#!";
    m_closeMassage="massage_motor_stop#!";
    m_openLaser="mode_2_vision#!";
    m_closeLaser="vision_check_end#!";



    m_startKinect="startKinect";



    m_sendPhoto="massage_start_ send_photo#!";
}

QString QmlShareDate::getMassageName()
{
    return m_massageName;
}

void QmlShareDate::setMassageName(const QString massagename)
{
    m_massageName=massagename;
}
