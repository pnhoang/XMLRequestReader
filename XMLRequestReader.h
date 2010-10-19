//
//  XMLRequestReader.h
//
//  Created by Hoang Pham on 29/09/10.
//  Copyright 2010 __Hoang Pham__. All rights reserved.
//  Inherited from troybrant.net/blog/2010/09/simple-xml-to-nsdictionary-converter/

#import <Foundation/Foundation.h>

@interface XMLRequestReader : NSObject <NSXMLParserDelegate>{
	NSMutableArray *dictionaryStack;
	NSMutableString *textInProgress;
	NSError **errorPointer;
}

+ (NSDictionary *)dictionaryForXMLData: (NSData *)data error: (NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString: (NSString *)string error: (NSError **)errorPointer;

+ (NSDictionary *)dictionaryForRequest: (NSString *)requestName 
							requestURL: (NSString *)requestURL 
					  parametersString: (NSString *)paramsString 
								 error:(NSError **)errorPointer;

@end
