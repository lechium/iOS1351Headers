/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSDate;


@protocol WBSParsecABGroupStore <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client; 
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
@required
-(NSNumber *)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1;
-(id<WBSParsecABGroupStoreClient>)client;
-(void)setClient:(id)arg1;
-(NSDate *)generationDate;
-(void)setGenerationDate:(id)arg1;

@end

