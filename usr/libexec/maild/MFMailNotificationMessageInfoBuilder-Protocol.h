//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MailAccount, NSArray, NSDate, NSSet, NSString;

@protocol MFMailNotificationMessageInfoBuilder <NSObject>
@property(nonatomic) int mailboxType;
@property(nonatomic) _Bool showLoading;
@property(copy, nonatomic) NSString *senderCommentedAddress;
@property(copy, nonatomic) NSString *mailboxURLString;
@property(copy, nonatomic) NSString *messageIDHash;
@property(copy, nonatomic) NSString *globalMessageReference;
@property(copy, nonatomic) NSString *localMessageReference;
@property(copy, nonatomic) NSString *messageReference;
@property(copy, nonatomic) NSString *accountReference;
@property(copy, nonatomic) NSString *messageBodySummary;
@property(copy, nonatomic) NSSet *subsectionIDs;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *coalesceThreadID;
@property(retain, nonatomic) NSDate *dateReceived;
@property(copy, nonatomic) NSArray *suppressionContext;
@property(nonatomic) unsigned long long messageStatus;
@property(nonatomic) long long sectionSubtype;
@property(retain, nonatomic) MailAccount *account;
@end

