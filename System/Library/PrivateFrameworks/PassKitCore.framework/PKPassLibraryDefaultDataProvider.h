/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class PKPassLibrary, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
-(id)init;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)canAddPaymentPass;
-(id)passWithUniqueID:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(id)peerPaymentPassUniqueID;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(void)removePass:(id)arg1 ;
-(BOOL)canProvisionAccessPassWithConfiguration:(id)arg1 ;
-(id)paymentPasses;
@end

