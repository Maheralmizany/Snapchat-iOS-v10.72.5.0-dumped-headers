//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawingBuilder : NSObject
{
    NSString *_type;
    NSArray *_strokes;
    NSString *_imageData;
    NSNumber *_smoothingVersion;
}

+ (id)withJUGalleryDrawing:(id)arg1;
- (void).cxx_destruct;
- (id)setSmoothingVersion:(id)arg1;
- (id)setImageData:(id)arg1;
- (id)setStrokes:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setSmoothingVersionValue:(int)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

