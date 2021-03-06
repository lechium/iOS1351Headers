//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (IMAdditions)
+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;	// IMP=0x0000000100004710
- (_Bool)im_isPerformingSafeAccess;	// IMP=0x00000001000057c4
- (void)im_performSafeAccess:(CDUnknownBlockType)arg1;	// IMP=0x00000001000055fc
- (void)im_popSafeAccessState;	// IMP=0x00000001000055f8
- (void)im_pushSafeAccessState;	// IMP=0x00000001000055f4
- (id)entity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x0000000100005584
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5;	// IMP=0x00000001000054e8
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(unsigned long long)arg5 prefetchRelationships:(id)arg6;	// IMP=0x00000001000053b0
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 prefetchRelationships:(id)arg5;	// IMP=0x00000001000051b4
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x000000010000506c
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x0000000100004f10
- (id)newByClass:(Class)arg1;	// IMP=0x0000000100004ea0
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;	// IMP=0x0000000100004da8
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x0000000100004cb4
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x0000000100004c0c
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5 distinct:(_Bool)arg6;	// IMP=0x0000000100004910
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x00000001000047e4
- (void)batchDeleteEntity:(id)arg1 matching:(id)arg2 prefetchRelationships:(id)arg3;	// IMP=0x00000001000057cc
@end

