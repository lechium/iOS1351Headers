/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionHostProtocol.h>

@protocol ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol> {

	id<ILClassificationUIExtensionHostContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<ILClassificationUIExtensionHostContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<ILClassificationUIExtensionHostContextDelegate>)delegate;
-(void)setDelegate:(id<ILClassificationUIExtensionHostContextDelegate>)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(oneway void)setReadyForClassificationResponse:(BOOL)arg1 ;
-(void)prepareForClassificationRequest:(id)arg1 ;
-(void)classificationResponseForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

