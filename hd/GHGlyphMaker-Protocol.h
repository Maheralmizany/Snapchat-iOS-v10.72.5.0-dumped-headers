//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol GHGlyphMaker <NSObject>
- (struct CGPath *)newPath;
- (void)renderIntoContext:(struct CGContext *)arg1 withSVGContext:(id <SVGContext>)arg2;
- (void)addGlyphsToContext:(struct CGContext *)arg1 withSVGContext:(id <SVGContext>)arg2;
- (void)addGlyphsToArray:(NSMutableArray *)arg1 withSVGContext:(id <SVGContext>)arg2;
@end

