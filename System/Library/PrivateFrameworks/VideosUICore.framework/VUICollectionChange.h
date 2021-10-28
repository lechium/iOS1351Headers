/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexSet, VUICollectionChangeSet;

@interface VUICollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;
	VUICollectionChangeSet* _updateChangeSet;

}

@property (nonatomic,readonly) unsigned long long changeKind;                       //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                     //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;                //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * updateChangeSet;              //@synthesize updateChangeSet=_updateChangeSet - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)changeKind;
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(void)setUpdateChangeSet:(VUICollectionChangeSet *)arg1 ;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
-(VUICollectionChangeSet *)updateChangeSet;
@end
