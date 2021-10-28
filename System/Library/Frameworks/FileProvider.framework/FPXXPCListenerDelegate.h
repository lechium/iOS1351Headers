/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class FPXExtensionContext, NSXPCInterface, NSString;

@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	FPXExtensionContext* _context;
	NSXPCInterface* _interface;
	id _exportedObject;
	NSString* _serviceName;

}

@property (nonatomic,retain) FPXExtensionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSXPCInterface * interface;                 //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) id exportedObject;                          //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExportedObject:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(FPXExtensionContext *)context;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(NSString *)serviceName;
-(id)exportedObject;
-(void)setContext:(FPXExtensionContext *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
@end
