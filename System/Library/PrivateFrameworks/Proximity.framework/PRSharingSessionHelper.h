/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Proximity/Proximity-Structs.h>
@interface PRSharingSessionHelper : NSObject
+(id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2 ;
+(id)UUIDStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 len:(unsigned long long)arg2 ;
+(id)HexStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)NSDataMacToUUID:(id)arg1 ;
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2 ;
+(unsigned long long)NSDataToUInt64:(id)arg1 ;
+(id)convertMacStringToNSData:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)reverseNSData:(id)arg1 ;
+(int)ProxToCoarseRange:(long long)arg1 ;
+(id)ProxToString:(long long)arg1 ;
+(long long)CoarseRangeToProx:(int)arg1 ;
@end
