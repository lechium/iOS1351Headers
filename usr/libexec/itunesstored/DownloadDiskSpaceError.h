//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadError.h"

#import "NSCopying-Protocol.h"

@interface DownloadDiskSpaceError : DownloadError <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001304f0
- (void)performActionForResponseFlags:(unsigned long long)arg1;	// IMP=0x000000010013042c
- (id)copyUserNotification;	// IMP=0x00000001001300bc
- (_Bool)canCoalesceWithError:(id)arg1;	// IMP=0x0000000100130088

@end

