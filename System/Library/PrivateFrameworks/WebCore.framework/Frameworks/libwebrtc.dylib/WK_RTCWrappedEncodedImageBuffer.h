/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@interface WK_RTCWrappedEncodedImageBuffer : NSObject {

	scoped_refptr<webrtc::EncodedImageBufferInterface>* _buffer;

}

@property (assign,nonatomic) scoped_refptr<webrtc::EncodedImageBufferInterface>* buffer;              //@synthesize buffer=_buffer - In the implementation block
-(void)setBuffer:(scoped_refptr<webrtc::EncodedImageBufferInterface>*)arg1 ;
-(scoped_refptr<webrtc::EncodedImageBufferInterface>*)buffer;
-(id)initWithEncodedImageBuffer:(scoped_refptr<webrtc::EncodedImageBufferInterface>*)arg1 ;
@end

