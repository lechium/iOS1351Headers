/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <PDFKit/PDFHostProtocol.h>

@class PDFHostViewController, NSString;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol> {

	PDFHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) PDFHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(PDFHostViewController *)arg1 ;
-(PDFHostViewController *)hostViewController;
-(oneway void)extensionToHost:(id)arg1 ;
@end

