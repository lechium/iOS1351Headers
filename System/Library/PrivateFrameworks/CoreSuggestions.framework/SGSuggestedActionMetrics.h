/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMContactInBanner, SGMContactConfirmed, SGMContactRejected, SGMContactDetailConfirmed, SGMContactDetailRejected, SGMContactDetailUsed, SGMEventInBanner, SGMEventBannerConfirmed, SGMEventBannerRejected, SGMMaybeInformationShown, SGMUnknownContactInformationShown, SGMContactDetailConversationTurn;

@interface SGSuggestedActionMetrics : NSObject {

	SGMContactInBanner* _contactInBanner;
	SGMContactConfirmed* _contactConfirmed;
	SGMContactRejected* _contactRejected;
	SGMContactDetailConfirmed* _contactDetailConfirmed;
	SGMContactDetailRejected* _contactDetailRejected;
	SGMContactDetailUsed* _contactDetailUsed;
	SGMEventInBanner* _eventInBanner;
	SGMEventBannerConfirmed* _eventBannerConfirmed;
	SGMEventBannerRejected* _eventBannerRejected;
	SGMMaybeInformationShown* _maybeInformationShown;
	SGMUnknownContactInformationShown* _unknownContactInformationShown;
	SGMContactDetailConversationTurn* _contactDetailConversationTurn;

}

@property (nonatomic,retain) SGMContactInBanner * contactInBanner;                                            //@synthesize contactInBanner=_contactInBanner - In the implementation block
@property (nonatomic,retain) SGMContactConfirmed * contactConfirmed;                                          //@synthesize contactConfirmed=_contactConfirmed - In the implementation block
@property (nonatomic,retain) SGMContactRejected * contactRejected;                                            //@synthesize contactRejected=_contactRejected - In the implementation block
@property (nonatomic,retain) SGMContactDetailConfirmed * contactDetailConfirmed;                              //@synthesize contactDetailConfirmed=_contactDetailConfirmed - In the implementation block
@property (nonatomic,retain) SGMContactDetailRejected * contactDetailRejected;                                //@synthesize contactDetailRejected=_contactDetailRejected - In the implementation block
@property (nonatomic,retain) SGMContactDetailUsed * contactDetailUsed;                                        //@synthesize contactDetailUsed=_contactDetailUsed - In the implementation block
@property (nonatomic,retain) SGMEventInBanner * eventInBanner;                                                //@synthesize eventInBanner=_eventInBanner - In the implementation block
@property (nonatomic,retain) SGMEventBannerConfirmed * eventBannerConfirmed;                                  //@synthesize eventBannerConfirmed=_eventBannerConfirmed - In the implementation block
@property (nonatomic,retain) SGMEventBannerRejected * eventBannerRejected;                                    //@synthesize eventBannerRejected=_eventBannerRejected - In the implementation block
@property (nonatomic,retain) SGMMaybeInformationShown * maybeInformationShown;                                //@synthesize maybeInformationShown=_maybeInformationShown - In the implementation block
@property (nonatomic,retain) SGMUnknownContactInformationShown * unknownContactInformationShown;              //@synthesize unknownContactInformationShown=_unknownContactInformationShown - In the implementation block
@property (nonatomic,retain) SGMContactDetailConversationTurn * contactDetailConversationTurn;                //@synthesize contactDetailConversationTurn=_contactDetailConversationTurn - In the implementation block
+(id)instance;
+(void)recordContactDetailUsage:(id)arg1 withApp:(id)arg2 ;
+(void)recordMaybeContactFrom:(unsigned long long)arg1 withVersion:(id)arg2 ;
+(void)recordBannerShownWithContacts:(id)arg1 events:(id)arg2 inApp:(SGMBannerDisplayApp_)arg3 ;
+(void)recordBannerConfirmedWithContact:(id)arg1 proposedCNContact:(id)arg2 confirmedCNContact:(id)arg3 inApp:(SGMBannerDisplayApp_)arg4 ;
+(void)recordBannerRejectedWithContact:(id)arg1 inApp:(SGMBannerDisplayApp_)arg2 ;
+(void)recordBannerConfirmedWithEvent:(id)arg1 proposedEKEvent:(id)arg2 confirmedEKEvent:(id)arg3 inApp:(SGMBannerDisplayApp_)arg4 ;
+(void)recordBannerRejectedWithEvent:(id)arg1 inApp:(SGMBannerDisplayApp_)arg2 ;
+(void)recordContactDetailEngagementWithResolution:(long long)arg1 detailType:(SGMContactDetailType_)arg2 extractionType:(unsigned long long)arg3 modelVersion:(id)arg4 ;
+(void)recordConversationTurnWithContact:(id)arg1 received:(BOOL)arg2 curated:(BOOL)arg3 throughApp:(id)arg4 withDetailName:(id)arg5 withDetailExtraction:(id)arg6 ;
-(id)init;
-(SGMContactInBanner *)contactInBanner;
-(void)setContactInBanner:(SGMContactInBanner *)arg1 ;
-(SGMContactConfirmed *)contactConfirmed;
-(void)setContactConfirmed:(SGMContactConfirmed *)arg1 ;
-(SGMContactRejected *)contactRejected;
-(void)setContactRejected:(SGMContactRejected *)arg1 ;
-(SGMContactDetailConfirmed *)contactDetailConfirmed;
-(void)setContactDetailConfirmed:(SGMContactDetailConfirmed *)arg1 ;
-(SGMContactDetailRejected *)contactDetailRejected;
-(void)setContactDetailRejected:(SGMContactDetailRejected *)arg1 ;
-(SGMContactDetailUsed *)contactDetailUsed;
-(void)setContactDetailUsed:(SGMContactDetailUsed *)arg1 ;
-(SGMEventInBanner *)eventInBanner;
-(void)setEventInBanner:(SGMEventInBanner *)arg1 ;
-(SGMEventBannerConfirmed *)eventBannerConfirmed;
-(void)setEventBannerConfirmed:(SGMEventBannerConfirmed *)arg1 ;
-(SGMEventBannerRejected *)eventBannerRejected;
-(void)setEventBannerRejected:(SGMEventBannerRejected *)arg1 ;
-(SGMMaybeInformationShown *)maybeInformationShown;
-(void)setMaybeInformationShown:(SGMMaybeInformationShown *)arg1 ;
-(SGMUnknownContactInformationShown *)unknownContactInformationShown;
-(void)setUnknownContactInformationShown:(SGMUnknownContactInformationShown *)arg1 ;
-(SGMContactDetailConversationTurn *)contactDetailConversationTurn;
-(void)setContactDetailConversationTurn:(SGMContactDetailConversationTurn *)arg1 ;
@end

