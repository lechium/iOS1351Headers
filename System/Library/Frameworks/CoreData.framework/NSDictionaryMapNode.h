/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSStoreMapNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDictionaryMapNode : NSStoreMapNode <NSSecureCoding> {

	id* _attributes;
	id _attributesAsEncoded;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)_doAttributeDecoding;
-(id)initWithValues:(id*)arg1 objectID:(id)arg2 ;
-(const id*)attributeValues;
@end

