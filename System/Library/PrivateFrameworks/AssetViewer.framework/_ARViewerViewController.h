/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ARViewerVendorProtocol.h>

@protocol ARViewerVendorProtocol;
@class NSString;

@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol> {

	id<ARViewerVendorProtocol> _arviewerDelegate;

}

@property (retain) id<ARViewerVendorProtocol> arviewerDelegate;              //@synthesize arviewerDelegate=_arviewerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(oneway BOOL)isIgnoringInteractionEvents;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(oneway long long)statusBarOrientation;
-(id<ARViewerVendorProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerVendorProtocol>)arg1 ;
@end
