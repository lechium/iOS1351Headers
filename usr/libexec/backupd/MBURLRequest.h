//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MBURLRequest : NSObject
{
    NSString *_method;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSMutableDictionary *_headers;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    _Bool _MMePreAuth;	// 40 = 0x28
    _Bool _log;	// 41 = 0x29
}

+ (id)requestWithMethod:(id)arg1 URL:(id)arg2;	// IMP=0x0000000100159398
+ (id)requestWithURL:(id)arg1;	// IMP=0x0000000100159350
+ (id)request;	// IMP=0x0000000100159334
@property(nonatomic, getter=shouldLog) _Bool log; // @synthesize log=_log;
@property(nonatomic, getter=useMMePreAuth) _Bool MMePreAuth; // @synthesize MMePreAuth=_MMePreAuth;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
- (id)NSURLRequest;	// IMP=0x0000000100159538
- (void)setValue:(id)arg1 forHeader:(id)arg2;	// IMP=0x0000000100159528
@property(copy, nonatomic) NSDictionary *headers;
- (void)dealloc;	// IMP=0x000000010015946c
- (id)init;	// IMP=0x0000000100159400

@end
