//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageLoadingContext, NNMKContentAttributedStringHTMLParser, NSURLSession;
@protocol EFCancelable;

@interface MFNanoServerMessageContentParser : NSObject
{
    NNMKContentAttributedStringHTMLParser *_htmlParser;	// 8 = 0x8
    MFMessageLoadingContext *_loadingContext;	// 16 = 0x10
    NSURLSession *_htmlContentURLSession;	// 24 = 0x18
    id <EFCancelable> _cancelable;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c1cc4
- (id)_attachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00000001000c1998
- (id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00000001000c1758
- (void)_parseAttachmentsFromMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5;	// IMP=0x00000001000c1298
- (id)_parseWebMessageDocumentMimePart:(id)arg1 messageBody:(id)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 maxImageAttachments:(unsigned long long)arg5 shouldTryAlternatives:(_Bool)arg6 urlsForValidation:(id)arg7 finalNanoAttachmentsList:(id)arg8 finalImageAttachmentsURLsToLoad:(id)arg9 finalImageAttachmentsLoaded:(id)arg10 usingAlternativePart:(_Bool *)arg11 partiallyLoaded:(_Bool *)arg12;	// IMP=0x00000001000c0880
- (id)_parseStringMimePart:(id)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000001000c07b4
- (id)_parseTextAttachmentMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5;	// IMP=0x00000001000c04c4
- (_Bool)_parseMimeParts:(id)arg1 messageBody:(id)arg2 attributedString:(id)arg3 maxLength:(unsigned long long)arg4 maxImageWidth:(double)arg5 maxImageAttachments:(unsigned long long)arg6 shouldTryAlternatives:(_Bool)arg7 urlsForValidation:(id)arg8 nanoAttachmentsList:(id)arg9 imageAttachmentsURLsToLoad:(id)arg10 imageAttachmentsLoaded:(id)arg11 usingAlternativePart:(_Bool *)arg12 partiallyLoaded:(_Bool *)arg13;	// IMP=0x00000001000bffc8
- (id)parseMessageWithLoadingContextEvent:(id)arg1 maxImageWidth:(double)arg2 messageBody:(out id *)arg3 imageAttachmentsURLsToLoad:(out id *)arg4 imageAttachmentsLoaded:(out id *)arg5;	// IMP=0x00000001000bf5ac
- (void)parseMessage:(id)arg1 maxImageWidth:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bede4
- (id)init;	// IMP=0x00000001000bed50
- (void)dealloc;	// IMP=0x00000001000becd0

@end

