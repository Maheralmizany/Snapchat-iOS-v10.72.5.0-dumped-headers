//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NYTPhotosViewControllerDataSource.h"

@class NSArray;

@interface NYTPhotosDataSource : NSObject <NYTPhotosViewControllerDataSource>
{
    NSArray *_photos;
}

@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (_Bool)containsPhoto:(id)arg1;
- (unsigned long long)indexOfPhoto:(id)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfPhotos;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithPhotos:(id)arg1;
- (id)init;

@end

