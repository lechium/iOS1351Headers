/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration> {

	xmlXPathObject* _xmlXPath;
	unsigned long long _cursor;
	ONOXMLDocument* _document;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;               //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (assign,nonatomic) unsigned long long cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,retain) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
-(void)dealloc;
-(id)objectAtIndex:(long long)arg1 ;
-(id)nextObject;
-(id)allObjects;
-(unsigned long long)cursor;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(void)setCursor:(unsigned long long)arg1 ;
-(ONOXMLDocument *)document;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

