/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFAirDropAction, NSString, SFAirDropTransferMetaData, NSError, NSProgress, NSArray, NSURL;

@interface SFAirDropTransfer : NSObject <NSSecureCoding, NSCopying> {

	SFAirDropAction* _cancelAction;
	NSString* _identifier;
	SFAirDropTransferMetaData* _metaData;
	NSError* _error;
	NSProgress* _transferProgress;
	NSString* _contentsTitle;
	NSString* _contentsDescription;
	SFAirDropAction* _selectedAction;
	NSArray* _possibleActions;
	NSArray* _completedURLs;
	unsigned long long _userResponse;
	unsigned long long _transferState;
	unsigned long long _failureReason;
	NSURL* _customDestinationURL;
	id _progressToken;

}

@property (nonatomic,copy) NSURL * customDestinationURL;                        //@synthesize customDestinationURL=_customDestinationURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFAirDropTransferMetaData * metaData;              //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned long long userResponse;                   //@synthesize userResponse=_userResponse - In the implementation block
@property (assign,nonatomic) unsigned long long transferState;                  //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) unsigned long long failureReason;                  //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSProgress * transferProgress;                     //@synthesize transferProgress=_transferProgress - In the implementation block
@property (nonatomic,retain) id progressToken;                                  //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,copy) NSString * contentsTitle;                            //@synthesize contentsTitle=_contentsTitle - In the implementation block
@property (nonatomic,copy) NSString * contentsDescription;                      //@synthesize contentsDescription=_contentsDescription - In the implementation block
@property (nonatomic,retain) SFAirDropAction * selectedAction;                  //@synthesize selectedAction=_selectedAction - In the implementation block
@property (nonatomic,retain) NSArray * possibleActions;                         //@synthesize possibleActions=_possibleActions - In the implementation block
@property (nonatomic,retain) SFAirDropAction * cancelAction;                    //@synthesize cancelAction=_cancelAction - In the implementation block
@property (nonatomic,copy) NSArray * completedURLs;                             //@synthesize completedURLs=_completedURLs - In the implementation block
@property (nonatomic,readonly) BOOL needsAction; 
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversOfUserResponse;
+(BOOL)automaticallyNotifiesObserversOfTransferState;
+(BOOL)automaticallyNotifiesObserversOfFailureReason;
+(id)keyPathsForValuesAffectingNeedsAction;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCancelAction:(SFAirDropAction *)arg1 ;
-(SFAirDropAction *)cancelAction;
-(unsigned long long)userResponse;
-(unsigned long long)failureReason;
-(void)setFailureReason:(unsigned long long)arg1 ;
-(NSString *)contentsDescription;
-(SFAirDropTransferMetaData *)metaData;
-(void)setMetaData:(SFAirDropTransferMetaData *)arg1 ;
-(NSArray *)possibleActions;
-(unsigned long long)transferState;
-(SFAirDropAction *)selectedAction;
-(void)setUpProgress;
-(BOOL)updateWithTransfer:(id)arg1 ;
-(void)updateWithInformation:(id)arg1 ;
-(void)setUpProgressToBroadcast:(BOOL)arg1 ;
-(void)setUserResponse:(unsigned long long)arg1 ;
-(void)setTransferProgress:(NSProgress *)arg1 ;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(BOOL)updateUsingCoder:(id)arg1 ;
-(BOOL)needsAction;
-(void)setTransferState:(unsigned long long)arg1 ;
-(NSString *)contentsTitle;
-(void)setContentsTitle:(NSString *)arg1 ;
-(void)setContentsDescription:(NSString *)arg1 ;
-(void)setSelectedAction:(SFAirDropAction *)arg1 ;
-(void)setPossibleActions:(NSArray *)arg1 ;
-(NSArray *)completedURLs;
-(void)setCompletedURLs:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialInformation:(id)arg2 ;
-(NSProgress *)transferProgress;
-(NSURL *)customDestinationURL;
-(void)setCustomDestinationURL:(NSURL *)arg1 ;
@end

