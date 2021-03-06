/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PBCoercionRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _member_exporterByClass;
	NSMutableDictionary* _member_importerByClass;
	NSMutableDictionary* _member_classCoercionByClass;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * member_exporterByClass;                   //@synthesize member_exporterByClass=_member_exporterByClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * member_importerByClass;                   //@synthesize member_importerByClass=_member_importerByClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * member_classCoercionByClass;              //@synthesize member_classCoercionByClass=_member_classCoercionByClass - In the implementation block
+(id)archivedDataFromObject:(id)arg1 requestedType:(id)arg2 outError:(id*)arg3 ;
+(id)objectFromArchivedData:(id)arg1 URL:(id)arg2 requestedClass:(Class)arg3 typeIdentifier:(id)arg4 outError:(id*)arg5 ;
+(id)defaultRegistry;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(void)registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(void)registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(id)availableRepresentationTypesForClass:(Class)arg1 ;
-(void)loadRepresentationOfObject:(id)arg1 asType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_availableClassesToCoerceFromClass:(Class)arg1 ;
-(BOOL)canCoerceFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 ;
-(id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1 ;
-(id)newObjectOfClass:(Class)arg1 fromData:(id)arg2 ofType:(id)arg3 outError:(id*)arg4 ;
-(NSMutableDictionary *)member_exporterByClass;
-(void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toRepresentationOfType:(id)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)member_importerByClass;
-(void)_member_registerCoercionFromRepresentationConformingToType:(id)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)member_classCoercionByClass;
-(void)_member_registerCoercionFromObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 coercionBlock:(/*^block*/id)arg3 ;
-(id)_member_availableDirectRepresentationTypesForClass:(Class)arg1 ;
-(id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)arg1 ;
-(id)_newObjectOfClass:(Class)arg1 fromData:(id)arg2 URL:(id)arg3 ofType:(id)arg4 outError:(id*)arg5 ;
-(id)_member_exporterFromClass:(Class)arg1 toType:(id)arg2 ;
-(BOOL)canCoerceObjectOfClass:(Class)arg1 toRepresentationConformingToType:(id)arg2 ;
-(BOOL)canCoerceObjectOfClass:(Class)arg1 toObjectOfClass:(Class)arg2 ;
-(id)newObjectOfClass:(Class)arg1 fromContentsOfURL:(id)arg2 ofType:(id)arg3 outError:(id*)arg4 ;
-(id)_member_availableClassesToCoerceToFromClass:(Class)arg1 ;
-(void)setMember_exporterByClass:(NSMutableDictionary *)arg1 ;
-(void)setMember_importerByClass:(NSMutableDictionary *)arg1 ;
-(void)setMember_classCoercionByClass:(NSMutableDictionary *)arg1 ;
@end

