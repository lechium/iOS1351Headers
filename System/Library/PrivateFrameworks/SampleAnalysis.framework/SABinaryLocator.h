/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSMutableDictionary, NSString;

@interface SABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}

@property (assign) BOOL enabled; 
+(id)sharedBinaryLocator;
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(oneway void)done;
-(id)mappings;
-(id)urlForUUID:(id)arg1 ;
-(BOOL)removeURLForUUID:(id)arg1 ;
-(BOOL)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(void)saveMappings;
-(BOOL)addURL:(id)arg1 ForUUID:(id)arg2 ;
-(id)initSharedBinaryLocator;
-(void)_saveMappings;
@end
