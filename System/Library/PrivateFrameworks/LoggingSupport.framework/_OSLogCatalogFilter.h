/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableSet;

@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {

	NSMutableSet* _pidAccept;
	NSMutableSet* _processLookupSubstr;
	NSMutableSet* _senderLookupSubstr;
	NSMutableSet* _subsysSubstrAccept;
	NSMutableSet* _uuidAccept;
	char* _uuidtext_path;
	BOOL _hasItems;
	BOOL _hasSharedCacheItems;

}
-(void)dealloc;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)addProcessID:(id)arg1 ;
-(BOOL)isKeptCatalog:(catalog_s*)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 collection:(id)arg2 ;
-(BOOL)containsProcessID:(id)arg1 ;
-(void)addSubsystem:(id)arg1 ;
-(BOOL)containsSubsystemSubstr:(id)arg1 ;
-(void)addUUID:(id)arg1 ;
-(BOOL)containsUUID:(id)arg1 ;
-(void)addProcessLookupSubstr:(id)arg1 ;
-(void)addSenderLookupSubstr:(id)arg1 ;
-(BOOL)containsProcessLookupSubstr:(id)arg1 ;
-(BOOL)containsSenderLookupSubstr:(id)arg1 ;
-(void)generateUUIDSet;
-(void)readDSOUUIDs;
-(void)handleDSOFile:(ftsent*)arg1 ;
-(void)readDSCUUIDs;
-(uuiddb_dsc_map_s*)getDSCMap;
-(void)handleDSCContents:(uuiddb_dsc_map_s*)arg1 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 ;
@end
