/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MPRadioRecentStationsGroup : NSObject <NSSecureCoding> {

	NSString* _localizedTitle;
	NSArray* _stations;

}

@property (nonatomic,copy) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSArray * stations;                     //@synthesize stations=_stations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSArray *)stations;
-(void)setStations:(NSArray *)arg1 ;
@end
