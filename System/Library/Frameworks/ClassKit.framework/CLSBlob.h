/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSData, NSString;

@interface CLSBlob : CLSObject <CLSRelationable> {

	int _type;
	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithType:(int)arg1 data:(id)arg2 ;
-(BOOL)validateObject:(id*)arg1 ;
@end
