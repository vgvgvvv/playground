
UseQt()
FindQtComponent(Widgets)

set(TargetName FirstQt)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE EXE
        LIB_PRIVATE Qt6::Widgets
)
