//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFastEnumeration.h"

@protocol NYTPhotosViewControllerDataSource <NSFastEnumeration>
@property(readonly, nonatomic) unsigned long long numberOfPhotos;
- (id <NYTPhoto>)objectAtIndexedSubscript:(unsigned long long)arg1;
- (_Bool)containsPhoto:(id <NYTPhoto>)arg1;
- (unsigned long long)indexOfPhoto:(id <NYTPhoto>)arg1;
- (id <NYTPhoto>)photoAtIndex:(unsigned long long)arg1;
@end
