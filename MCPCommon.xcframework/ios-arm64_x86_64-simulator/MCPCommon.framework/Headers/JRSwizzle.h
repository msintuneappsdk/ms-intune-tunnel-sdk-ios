//	Copyright (c) 2007-2011 Jonathan 'Wolf' Rentzsch: http://rentzsch.com
//	Some rights reserved: http://opensource.org/licenses/mit-license.php

#import <Foundation/Foundation.h>

void forceLinkNSObjectCategory(void);

typedef void(^fp_inspectInit)(Class clazz, NSObject *incomplete_obj);

@interface NSObject (JRSwizzle)

+ (void) registerInitInspector: (fp_inspectInit) inspector;

+ (BOOL)jr_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError**)error_;
+ (BOOL)jr_swizzleClassMethod:(SEL)origSel_ withClassMethod:(SEL)altSel_ error:(NSError**)error_;

@end
