/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OTSVG.framework/OTSVG
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OTSVG/OTSVG-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString;

@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate> {

	BOOL errorOccurred;
	unsigned skipDepth;
	unsigned unitsPerEm;
	unsigned elementCount;
	unique_ptr<SVG::SVGElement, std::__1::default_delete<SVG::SVGElement> >* root;
	vector<std::__1::reference_wrapper<SVG::Element>, std::__1::allocator<std::__1::reference_wrapper<SVG::Element> > >* stack;
	unordered_map<std::__1::basic_string<char>, std::__1::stack<std::__1::basic_string<char>, std::__1::deque<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::stack<std::__1::basic_string<char>, std::__1::deque<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > > >* namespaces;

}

@property (assign) BOOL errorOccurred; 
@property (assign) unsigned skipDepth; 
@property (assign) unsigned unitsPerEm; 
@property (assign) unsigned elementCount; 
@property (assign) unique_ptr<SVG::SVGElement* root; 
@property (assign) vector<std::__1::reference_wrapper<SVG::Element> stack; 
@property (assign) unordered_map<std::__1::basic_string<char> namespaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3 ;
-(void)parser:(id)arg1 didEndMappingPrefix:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(unique_ptr<SVG::SVGElement*)root;
-(void)setRoot:(unique_ptr<SVG::SVGElement*)arg1 ;
-(void)setStack:(vector<std::__1::reference_wrapper<SVG::Element>)arg1 ;
-(vector<std::__1::reference_wrapper<SVG::Element>)stack;
-(unsigned)elementCount;
-(void)setElementCount:(unsigned)arg1 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(BOOL)errorOccurred;
-(unordered_map<std::__1::basic_string<char>)namespaces;
-(void)setNamespaces:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(void)setErrorOccurred:(BOOL)arg1 ;
-(void)setSkipDepth:(unsigned)arg1 ;
-(void)setUnitsPerEm:(unsigned)arg1 ;
-(unsigned)skipDepth;
-(unsigned)unitsPerEm;
-(id)initWithUnitsPerEm:(unsigned)arg1 ;
@end

