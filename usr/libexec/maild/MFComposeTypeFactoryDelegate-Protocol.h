//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EFFuture, MFComposeWebView, MFMailAccountProxy, MFMutableMessageHeaders, NSArray, NSString;
@protocol MFMailAccountProxyGenerator;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (EFFuture *)shouldCreateRichTextRepresentation;
- (NSArray *)attachments;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (MFMutableMessageHeaders *)savedHeaders;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (NSString *)subject;
- (void)setSubject:(NSString *)arg1;
- (NSArray *)bccRecipients;
- (void)setBccRecipients:(NSArray *)arg1;
- (NSArray *)ccRecipients;
- (void)setCcRecipients:(NSArray *)arg1;
- (NSArray *)toRecipients;
- (void)setToRecipients:(NSArray *)arg1;
- (MFComposeWebView *)composeWebView;
- (id <MFMailAccountProxyGenerator>)accountProxyGenerator;

@optional
- (void)setOriginalMessageWasEncrypted:(_Bool)arg1;
- (unsigned long long)contentVariationIndex;
- (void)contentDidChange;
- (void)addSignature:(_Bool)arg1;
@end

