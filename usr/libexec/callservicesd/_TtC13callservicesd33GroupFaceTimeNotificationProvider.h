//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13callservicesd33GroupFaceTimeNotificationProvider : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *conversationManager;	// 16 = 0x10
    MISSING_TYPE *notificationIdentifiersByConversationUUID;	// 24 = 0x18
    MISSING_TYPE *carPlayNotificationIdentifiersByConversationUUID;	// 32 = 0x20
    MISSING_TYPE *postedParticipantJoinIdentifiers;	// 40 = 0x28
    MISSING_TYPE *openURL;	// 48 = 0x30
    MISSING_TYPE *localizeConversationName;	// 64 = 0x40
    MISSING_TYPE *localizeHandleName;	// 80 = 0x50
    MISSING_TYPE *notificationType;	// 96 = 0x60
    MISSING_TYPE *categories;	// 104 = 0x68
    MISSING_TYPE *add;	// 112 = 0x70
    MISSING_TYPE *removeNotification;	// 128 = 0x80
    MISSING_TYPE *updateBadgeValue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000010014a3f4
- (void)handlePendingMessageDidReceiveInviteNotification:(id)arg1;	// IMP=0x000000010014a2ac
- (void)momentsStartedRemoteCapture:(id)arg1;	// IMP=0x0000000100149a54
- (id)init;	// IMP=0x0000000100148024

@end
