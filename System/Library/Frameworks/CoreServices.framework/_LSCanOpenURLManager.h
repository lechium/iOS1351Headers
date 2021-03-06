/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface _LSCanOpenURLManager : NSObject {

	NSMutableDictionary* _canOpenURLsMap;
	NSObject*<OS_dispatch_queue> _canOpenURLsMapQueue;
	int _saveFlag;

}
+(id)queryForApplicationsAvailableForOpeningURL:(id)arg1 ;
+(id)sharedManager;
+(BindingEvaluator*)bindingEvaluatorForScheme:(id)arg1 ;
-(id)init;
-(BOOL)canOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(id)copySchemesMap;
-(BOOL)internalCanOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(void)writeSchemesMap;
-(long long)schemeTypeOfScheme:(id)arg1 ;
-(void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1 ;
-(void)getIsURL:(id)arg1 alwaysCheckable:(BOOL*)arg2 hasHandler:(BOOL*)arg3 ;
-(BOOL)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3 ;
-(BOOL)findApplicationBundleID:(unsigned*)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 forXPCConnection:(id)arg4 ;
-(BOOL)isBundleID:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5 ;
-(BOOL)legacy_isBundleID:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5 ;
@end

