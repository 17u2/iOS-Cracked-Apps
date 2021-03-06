//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTHTMLParser, NSData, NSDictionary, NSError, NSString;

@protocol DTHTMLParserDelegate <NSObject>

@optional
- (void)parser:(DTHTMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parser:(DTHTMLParser *)arg1 foundProcessingInstructionWithTarget:(NSString *)arg2 data:(NSString *)arg3;
- (void)parser:(DTHTMLParser *)arg1 foundCDATA:(NSData *)arg2;
- (void)parser:(DTHTMLParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(DTHTMLParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(DTHTMLParser *)arg1 didEndElement:(NSString *)arg2;
- (void)parser:(DTHTMLParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)parserDidEndDocument:(DTHTMLParser *)arg1;
- (void)parserDidStartDocument:(DTHTMLParser *)arg1;
@end

