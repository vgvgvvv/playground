
UseQt()
FindQtComponent(Widgets)

set(TargetName QtWithDX11)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE EXE
        LIB_PRIVATE Qt6::Widgets
)

ReMake_StartUse()
UseDirectX11(${TargetName})
ReMake_EndUse()