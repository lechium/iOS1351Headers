/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IKViewElementStyle, NSDictionary, IKViewElementStyleComposer;

@interface IKTemplateTreeNode : NSObject <NSCopying> {

	IKTemplateTreeNode* _parentNode;
	NSString* _nodeName;
	IKViewElementStyle* _styleOverrides;
	NSDictionary* _childNodes;
	IKViewElementStyleComposer* _styleComposer;

}

@property (nonatomic,__weak,readonly) IKTemplateTreeNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeName;                              //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) IKViewElementStyle * styleOverrides;              //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * childNodes;                                 //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;              //@synthesize styleComposer=_styleComposer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKTemplateTreeNode *)parentNode;
-(IKViewElementStyle *)styleOverrides;
-(NSDictionary *)childNodes;
-(NSString *)nodeName;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3 ;
-(void)setChildNodes:(NSDictionary *)arg1 ;
@end
