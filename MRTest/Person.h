//
//  Person.h
//  MRTest
//
//  Created by Ryo Sakikawa on 4/26/13.
//  Copyright (c) 2013 Ryo Sakikawa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * firstname;
@property (nonatomic, retain) NSString * lastname;

@end
