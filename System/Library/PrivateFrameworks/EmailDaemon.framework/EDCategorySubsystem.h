/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDInteractionLogger, EDDonationController, EDInteractionEventLogUploader, EDInteractionEventLogFile;

@interface EDCategorySubsystem : NSObject {

	EDInteractionLogger* _interactionLogger;
	EDDonationController* _donationController;
	EDInteractionEventLogUploader* _logUploader;
	EDInteractionEventLogFile* _logFile;

}

@property (nonatomic,retain) EDInteractionEventLogUploader * logUploader;              //@synthesize logUploader=_logUploader - In the implementation block
@property (nonatomic,retain) EDInteractionEventLogFile * logFile;                      //@synthesize logFile=_logFile - In the implementation block
@property (nonatomic,readonly) EDInteractionLogger * interactionLogger;                //@synthesize interactionLogger=_interactionLogger - In the implementation block
@property (nonatomic,readonly) EDDonationController * donationController;              //@synthesize donationController=_donationController - In the implementation block
-(EDInteractionLogger *)interactionLogger;
-(EDDonationController *)donationController;
-(void)setLogFile:(EDInteractionEventLogFile *)arg1 ;
-(EDInteractionEventLogFile *)logFile;
-(void)_schedulePETSubmissionActivityForLog:(id)arg1 ;
-(id)initWithPersistence:(id)arg1 userProfileProvider:(id)arg2 vipManager:(id)arg3 sourceApplicationBundleIdentifier:(id)arg4 ;
-(EDInteractionEventLogUploader *)logUploader;
-(void)setLogUploader:(EDInteractionEventLogUploader *)arg1 ;
@end
