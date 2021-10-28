/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RCSAudioFile.h>

@class NSURL, AVAudioFormat, NSDictionary, RCSSavedRecordingAccessToken, NSString;

@interface _RCSAudioFile : NSObject <RCSAudioFile> {

	RCSSavedRecordingAccessToken* _fileToken;

}

@property (nonatomic,retain) RCSSavedRecordingAccessToken * fileToken;              //@synthesize fileToken=_fileToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) NSDictionary * settings; 
-(NSURL *)url;
-(NSDictionary *)settings;
-(AVAudioFormat *)processingFormat;
-(AVAudioFormat *)fileFormat;
-(RCSSavedRecordingAccessToken *)fileToken;
-(void)setFileToken:(RCSSavedRecordingAccessToken *)arg1 ;
@end
