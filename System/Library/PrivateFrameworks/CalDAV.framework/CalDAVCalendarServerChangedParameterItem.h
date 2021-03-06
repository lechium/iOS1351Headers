/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItemWithNoChildren.h>

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {

	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
-(NSString *)nameAttribute;
-(NSString *)typeAttribute;
-(void)setNameAttribute:(NSString *)arg1 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)setTypeAttribute:(NSString *)arg1 ;
@end

