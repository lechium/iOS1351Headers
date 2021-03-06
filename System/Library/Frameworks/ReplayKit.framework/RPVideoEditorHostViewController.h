/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol> {

	RPPreviewViewController* _previewViewController;
	RPVideoEditorExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) RPVideoEditorExtensionHostContext * hostContext;                     //@synthesize hostContext=_hostContext - In the implementation block
-(void)setPreviewViewController:(RPPreviewViewController *)arg1 ;
-(RPPreviewViewController *)previewViewController;
-(void)setHostContext:(RPVideoEditorExtensionHostContext *)arg1 ;
-(RPVideoEditorExtensionHostContext *)hostContext;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end

