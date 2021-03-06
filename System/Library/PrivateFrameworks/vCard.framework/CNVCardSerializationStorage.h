/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNVCardSerializationStorage <NSObject>
@required
-(void)appendString:(id)arg1;
-(void)appendFormat:(id)arg1;
-(void)appendData:(id)arg1;
-(unsigned long long)estimatedDataLength;
-(unsigned long long)currentLength;
-(id)insertionMarker;
-(void)insertString:(id)arg1 atMarker:(id)arg2;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;

@end

