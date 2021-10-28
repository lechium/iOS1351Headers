/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionVendorProtocol.h>

@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol> {

	BOOL _readyForClassificationResponse;

}

@property (assign,getter=isReadyForClassificationResponse,nonatomic) BOOL readyForClassificationResponse;              //@synthesize readyForClassificationResponse=_readyForClassificationResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)viewController;
-(void)setReadyForClassificationResponse:(BOOL)arg1 ;
-(oneway void)prepareForClassificationRequest:(id)arg1 ;
-(oneway void)classificationResponseForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isReadyForClassificationResponse;
@end
