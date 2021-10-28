/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AVTPuppetStore : NSObject {

	NSArray* _puppetRecords;

}

@property (nonatomic,copy) NSArray * puppetRecords;              //@synthesize puppetRecords=_puppetRecords - In the implementation block
+(id)createPuppetRecords;
-(id)initWithEnvironment:(id)arg1 ;
-(void)setPuppetRecords:(NSArray *)arg1 ;
-(NSArray *)puppetRecords;
-(id)avatarPuppetsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)loadPuppetRecordsIfNeeded;
-(id)allAvatarPuppetsWithError:(id*)arg1 ;
-(id)allAvatarPuppetsExcluding:(id)arg1 error:(id*)arg2 ;
-(id)allPuppetRecords;
@end
