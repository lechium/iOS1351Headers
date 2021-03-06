/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSURL, NSString;

@interface SUCoreEvent : NSObject {

	BOOL _changedSinceReported;
	NSMutableDictionary* _allFields;
	NSURL* _serverURL;
	NSString* _reportedUUID;

}

@property (nonatomic,retain) NSMutableDictionary * allFields;              //@synthesize allFields=_allFields - In the implementation block
@property (assign,nonatomic) BOOL changedSinceReported;                    //@synthesize changedSinceReported=_changedSinceReported - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                            //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,retain) NSString * reportedUUID;                      //@synthesize reportedUUID=_reportedUUID - In the implementation block
-(BOOL)isSuccess;
-(NSURL *)serverURL;
-(void)setServerURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)allFields;
-(id)initWithEventDictionary:(id)arg1 extendingWith:(id)arg2 reportingToServer:(id)arg3 ;
-(id)getAugmentedEvent;
-(BOOL)changedSinceReported;
-(BOOL)isEqualErrorEvent:(id)arg1 ;
-(void)incrementErrorCount;
-(NSString *)reportedUUID;
-(void)setChangedSinceReported:(BOOL)arg1 ;
-(void)setAllFields:(NSMutableDictionary *)arg1 ;
-(void)setReportedUUID:(NSString *)arg1 ;
@end

