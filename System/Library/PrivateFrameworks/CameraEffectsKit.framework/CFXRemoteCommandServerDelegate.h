/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CFXRemoteCommandServerDelegate
@required
-(void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5;
-(void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;
-(void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;

@end

